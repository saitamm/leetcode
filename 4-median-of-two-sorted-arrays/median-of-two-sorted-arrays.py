class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        length = len(nums1)+len(nums2)
        half = length //2
        med1 = len(nums1)//2
        med2 = min(half - med1, len(nums2)-1)
        if len(nums1) != 0 and len(nums2) != 0 :
            for i in range(med1+1, len(nums1)):
                if nums1[i] <= nums2[med2]:
                    med1+=1
            for i in range(med2+1, len(nums2)):
                if nums2[i] <= nums1[med1]:
                    med2+=1
        arr = nums1[0:med1+1]+nums2[0:med2+1]
        arr.sort()
        if length % 2 == 0:
            return float((arr[half-1]+arr[half])) /float(2)
        return arr[half]