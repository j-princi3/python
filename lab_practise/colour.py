import numpy as nu
import matplotlib.pyplot as plt

image=nu.zeros ((200,400,3),dtype=nu.uint8)
plt.imshow(image)
plt.axis('off')
plt.show()
image[50:151][99:201]=[225,225,225]
plt.imshow(image)
plt.show()
# image[99][199]=[225,225,225]
# plt.imshow(image)
# plt.axis('off')
# plt.show()