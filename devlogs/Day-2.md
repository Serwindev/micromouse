# Day 2 - Sourcing parts

I thought, sourcing parts would be fun and easy but it's just made me frustrating..!!
Nevertheless, i sourced products for ESP32, Motor driver and Motors 

When it come to Battery, i came to learn about a new term called "Discharge Ratio"

it's so interesting -- the formula is simple too
Discharge rate = discharge ratio x Battery capacity

The motor i am choosing for this project is N20 12V motors with Encoders..!! 

It will cost current around 0.9A -- PEAK current.
I'm using two and so, the highest current will be around 2+A (Including the ESP32, other components)

Therefore, the battery should be able to discharge this current safely

I found a 3.7V 150mAh LiPo Rechargeable Battery -- which has a discharge ratio of 0.2C and the battery capacity is 150mAh

By using the formula, we can calculate the discharge rate and which is 3A >> 2A

Hopefully, i will be able to use this battery -- Hopefully, I have to research more about this and finalize my decision.

Shitt -- ChatGPT just told me that i have to convert mAh -> Ah 
If i did according to that, then the motors can barely move -- because the discharge rate is just 0.3A