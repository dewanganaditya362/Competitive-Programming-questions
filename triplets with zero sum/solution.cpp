//suppose that vector "a" contains the input and is passed on to the threeSum function, below is the main crux of the solution,
//nput can be taken into the vector and can be passed easily.


vector<vector<int>> threeSum(vector<int>& a) {

        vector<vector<int>> v1;

        if(a.size()==0)
        return v1;

        sort(a.begin(),a.end());
       int previous = INT_MIN;
        for(int i = 0;i<a.size()-1;i++){

             int l = i+1;
             int r = a.size()-1;
             int x = a[i];

            if(previous ==x)
                continue;

            while(l< r){

                if(x+ a[l] + a[r] == 0)
                {
                    v1.push_back({x, a[l],a[r]});

                    while(l<r && a[l] == a[l+1]) // this is the condition so that we do not repeat the solutions
                        l++;

                    while(l<r && a[r]==a[r-1]) // condition so that the solution does not gets repeated
                        r--;

                    l++;
                    r--;
                }

                else if(x+ a[l] + a[r] < 0)
                    l++;

                else
                    r--;


            }
            previous = a[i];
        }

        return v1;
    }
