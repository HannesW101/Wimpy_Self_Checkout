Please note this application is in no way affiliated with Wimpy and the Famous Brands Company, it is merely a concept of a possible self checkout application for the franchise.

The idea for a self checkout application came from a visit to McDonalds where the self checkout machines are already implemented. The convenience and speed of ordering on one of these machines lead to a much more pleasant experience compared to waiting in line for long periods of time.

McDonalds sales increased by 6% after the first year of deploying their self checkout machines. In an NRF report, 97% of consumers will back out of their purchase decision if they face inconvenience in making that purchase. On the other hand, 90% of customers said they would seek an alternative if there were ten people queueing in front of them. There was an interesting shift in consumer behavior when presented with the option of ordering via a self checkout machine. The average order size increased by 20%, and the average order value at the time rose by 30%. Order accuracy also improved as there was no cashier to take the order and thus run the risk of forgetting an item on the order when ringing it up. It is purely up to the customer to create their own order.

From these facts its easy to see why McDonalds continues to use this self checkout system, the question is why is Wimpy not doing it too?

Regarding some points on my application:
- The idea is for it to run on a touchscreen system where users can walk up and start ordering, that is why in my design there is no top window bar (if you want to close the application you need to close it from the dock).
- Only the breakfast menu is fully implemented with all the items, all the other categories only have 3 items each. This is merely a concept so in a real world application all items on the menu will of course be implemented.
- For a real world application the program should also be linked to a cloud based database to easily update prices of the items from head office. The program is setup so each category has its own vector of prices so a database solution would not be challenging to implement.
- Currently the "Pay" button on the checkout page does not do anything, usually at a self checkout machine it will prompt the user to pay via cash at the counter or card with the card machine attached. Of course there is no physical hardware for my program to connect to so I decided to leave the implementation of the pay button for now.
- When deleting items in the cart you have to double click the item which isnt very user friendly, for a touch screen it would make more sense to have a trash can image next to each item so the user understands how to delete an item easily.
- Another thing that I would recommend is a prompt that shows up before you pay asking if you would like to leave a 10% tip, as with this system it removes all the tips that the wimpy employees would have received if they were serving customers at their tables.

Below is an example of the application running:

![1](https://github.com/HannesW101/Wimpy_Self_Checkout/assets/86373722/da21ecb9-82d1-41e9-b5a0-1b0d3439853c)

After starting an order you are brought to the main menu where you can select a category and add whichever items you wish. It defaults to the breakfast section as Wimpy is known for their excellent breakfasts.

![2](https://github.com/HannesW101/Wimpy_Self_Checkout/assets/86373722/daa683e9-21f3-4f87-920d-46c4b8018ad3)

Here are some examples of other categories.

![3](https://github.com/HannesW101/Wimpy_Self_Checkout/assets/86373722/77fe612b-ffc0-4bdb-984b-8a09d7bb126b)

![4](https://github.com/HannesW101/Wimpy_Self_Checkout/assets/86373722/921dd0f0-eba2-4a37-8ceb-d6ccfe49360d)

You simply click on an item to add it to your cart. You can see your cart top right on the screen that is displayed with a total value of the cart and also the number of items in the cart.

![5](https://github.com/HannesW101/Wimpy_Self_Checkout/assets/86373722/da3a5220-3255-4f49-a428-52299892abd9)

When you are ready to checkout simply click on the cart top right to be directed to the checkout page.

![6](https://github.com/HannesW101/Wimpy_Self_Checkout/assets/86373722/f086ca62-8fdb-4a70-8c0f-ea9abc9f1c1f)

Once on the checkout page you can have a full look at all the items youve added to your cart, their quantities and their individual prices. You can also look at the bottom to see a total value again of all the items you have ordered.

![7](https://github.com/HannesW101/Wimpy_Self_Checkout/assets/86373722/ba75494f-3464-4d3b-9eaf-a144b7620e09)

There is a button at the bottom to return to the menu to continue ordering if you may have forgotten anything in your order.

![8](https://github.com/HannesW101/Wimpy_Self_Checkout/assets/86373722/d48353f8-121f-453e-ad39-0fea75b7483d)

This user returned to the menu and added more iced coffees, you can see the quantities updated and the respected prices once they clicked on the cart again.

![9](https://github.com/HannesW101/Wimpy_Self_Checkout/assets/86373722/fb552432-eea0-4ca2-8e44-d21baeec0cd9)

The user then decided they didnt want the family meal anymore so they double clicked on it to delete it.

![10](https://github.com/HannesW101/Wimpy_Self_Checkout/assets/86373722/6eff313e-3a33-417b-b46e-f03d379ba1ad)

When you are done with your order the final thing to do is to click on the pay button. As mentioned in the beginning of the program this feature requires the hardware to be implemented.

![11](https://github.com/HannesW101/Wimpy_Self_Checkout/assets/86373722/3189a514-a6e1-4bff-8794-20967b39cbbb)



Sources:
https://www.wavetec.com/blog/mcdonalds-leveraging-self-service-technologies/#:~:text=The%20McDonald's%20self%2Dcheckout%20kiosk,or%20deal%20with%20any%20cash.
