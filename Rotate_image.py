
import cv2
import time
def rotate(angle):
    (h, w, d) = image.shape
    center = (w // 2, h // 2)
    M = cv2.getRotationMatrix2D(center, int(angle), 1.0)
    rotated = cv2.warpAffine(image, M, (w, h))
    print("A new tab will open with the printed image")
    time.sleep(3)
    cv2.imshow("Rotated Image", rotated)
    cv2.waitKey(0)

print("This is a program to Rotate any given image by the mentioned\n")
path = input("Enter the path to the image:\n")
image = cv2.imread(path)
angle = int(input("Enter the angle by which the image should be rotated:\n"))
rotate(angle)

