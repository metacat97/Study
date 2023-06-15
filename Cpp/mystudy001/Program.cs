using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace mystudy001
{
    public class Program
    {
        static void Main(string[] args)
        {

            int tempNum = 0;

            Random random = new Random();

            int buyNum;
            int gold = 500;

            shopItem item1 = new shopItem();
            shopItem item2 = new shopItem();
            shopItem item3 = new shopItem();
            shopItem item4 = new shopItem();
            shopItem item5 = new shopItem();
            shopItem item6 = new shopItem();

            item1.InitItem("나무방패", 1000);
            item2.InitItem("철", 600);
            item3.InitItem("구리", 200);
            item4.InitItem("아연", 400);
            item5.InitItem("다이아", 1000);
            item6.InitItem("나무", 100);


            List<shopItem> shop1 = new List<shopItem>();
            List<shopItem> shop2 = new List<shopItem>();    
            List<shopItem> inventory = new List<shopItem>();
            
            shop1.Add(item1);
            shop1.Add(item2);
            shop1.Add(item3);
            shop1.Add(item4);
            shop1.Add(item5);
            shop1.Add(item6);

            for (int i = 0; i < 150; i++)
            {
                tempNum = random.Next(0, shop1.Count);
                shop2.Add(shop1.ElementAt(tempNum));
                shop1.RemoveAt(tempNum);
                shop1.Add(shop2.ElementAt(0));
                shop2.RemoveAt(0);
            }


            Console.WriteLine("상점이 열립니다.");
            Console.ReadKey();

            ConsoleKeyInfo keyInput;

            while (gold>=30)
            {
                Console.Clear();
                Console.WriteLine("상점");

                PrintUserInven(inventory);
                keyInput = Console.ReadKey();
                
                
                switch(keyInput.Key)
                {
                    case ConsoleKey.Q :
                        return;
                    default:
                        ShuffleShop(shop1, shop2);
                        Console.Write("현재 보유 골드 : {0}\n\n", gold);
                        PrintShop(shop1);
                        Console.WriteLine("아이템 번호 입력 구매 진행");
                        string Input = Console.ReadLine();
                        buyNum = int.Parse(Input);
                        if (buyNum < 4)
                        {
                            var item = shop1[buyNum-1];
                            if (gold > item.itemPrice)
                            {
                                gold -= item.itemPrice;
                                Console.WriteLine("\n\n  {0}골드를 사용하여 아이템 {1}을 구매하셨습니다!", item.itemPrice, item.itemName);
                                inventory.Add(item);
                            }
                            else
                            {
                                Console.WriteLine("골드가 부족하여 아이템을 구매할 수 없습니다.");
                            }
                        }
                        Console.WriteLine("\n상점을 리롤합니다.");
                        Console.ReadKey();
                        break;



                }





            }


        }
        static public void PrintShop(List<shopItem> shop1)
        {
            for (int i = 0; i < 3; i++)
            {
                var item = shop1[i];
                Console.WriteLine("{2}.    {0}  가격 : {1}",
                    item.itemName, item.itemPrice, (i+1));
            }
        }

        static public void PrintUserInven(List<shopItem> inventory)
        {
            for ( int i = 0; i < inventory.Count; i++)
            {
                var item = inventory[i];
                Console.Write("{0}, ", item.itemName);
                if(i % 4 ==3)
                {
                    Console.WriteLine();
                }
            }
            Console.WriteLine("\n\n");
        }


        static public void ShuffleShop (List<shopItem> shop1, List<shopItem> shop2)
        {
            Random random = new Random();
            int tempNum;
            Console.WriteLine();
            for(int i = 0; i < 10; i ++)
            {
                tempNum = random.Next(0, shop1.Count);
                shop2.Add(shop1.ElementAt(tempNum));
                shop1.RemoveAt(tempNum);
                shop1.Add(shop2.ElementAt(0));
                shop2.RemoveAt(0);

            }



        }

    }
}
