print("======================================")
print("       TRAVEL COST CALCULATOR")
print("======================================")

# รับข้อมูลจากผู้ใช้
distance = float(input("ระยะทางรวม (กิโลเมตร): "))
fuel_rate = float(input("รถใช้น้ำมันกี่ km/L: "))
fuel_price = float(input("ราคาน้ำมันต่อลิตร: "))

people = int(input("จำนวนผู้เดินทาง (คน): "))

hotel = float(input("ค่าที่พัก (บาท): "))
food = float(input("ค่าอาหาร (บาท): "))
other = float(input("ค่าใช้จ่ายอื่น ๆ (บาท): "))

# คำนวณปริมาณน้ำมัน
fuel_used = distance / fuel_rate

# คำนวณค่าน้ำมัน
fuel_cost = fuel_used * fuel_price

# คำนวณค่าใช้จ่ายทั้งหมด
total_cost = fuel_cost + hotel + food + other

# คำนวณค่าใช้จ่ายต่อคน
cost_per_person = total_cost / people

# แสดงผล
print("\n======================================")
print("           TRIP SUMMARY")
print("======================================")

print(f"ระยะทางรวม       : {distance:.2f} km")
print(f"ใช้น้ำมันประมาณ  : {fuel_used:.2f} L")
print(f"ค่าน้ำมัน         : {fuel_cost:.2f} บาท")

print("--------------------------------------")

print(f"ค่าที่พัก         : {hotel:.2f} บาท")
print(f"ค่าอาหาร          : {food:.2f} บาท")
print(f"ค่าใช้จ่ายอื่น ๆ  : {other:.2f} บาท")

print("--------------------------------------")

print(f"ค่าใช้จ่ายทั้งหมด : {total_cost:.2f} บาท")
print(f"จำนวนคน           : {people} คน")
print(f"ค่าใช้จ่ายต่อคน   : {cost_per_person:.2f} บาท")

print("======================================")
print("          HAVE A SAFE TRIP! 🚗")
print("======================================")