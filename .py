def merge_intervals(Array):
    list_count = len(Array)
    print("No. of Lists in Given Array is: ",list_count)
    local_array_elements = []
    for LIST in Array:
        for number in LIST:
            local_array_elements.append(number)
        for Number_of_elements in range (0,len(local_array_elements)):
            if Number_of_elements < (len(local_array_elements)-1): # 3 times 
                if local_array_elements[Number_of_elements] > local_array_elements[Number_of_elements+1]:
                    local_array_elements.remove((local_array_elements[Number_of_elements+1]))
                    # print("The Local_array_elements are: ",local_array_elements)
                    min_local_array = min(local_array_elements)
                    max_local_array = max(local_array_elements)
                    for elements_of_local_array in range(len(local_array_elements)):
                        if elements_of_local_array < len(local_array_elements) and local_array_elements[elements_of_local_array] > min_local_array and local_array_elements[elements_of_local_array] < max_local_array:
                            local_array_elements.remove(local_array_elements[elements_of_local_array])
                    print("Merged Intervals is", local_array_elements)
                else:
                    pass
            else:
                pass

# merge_intervals([[1,4],[2,6],[5,10]])
merge_intervals([[1,3],[2,6],[8,10],[15,18]])


