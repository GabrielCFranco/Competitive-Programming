#include <bits/stdc++.h>
using namespace std;
void mergeSort(int inicio, int fim, int v[],int vite[],int n) {   
  int i, j, k, a, b, c, meio, vetaux[n],vetaux2[n];    
  if (inicio == fim) return;   
  // ordenação recursiva das duas metades   
  meio = (inicio+fim) / 2;   
  mergeSort (inicio,meio,v,vite,n);   
  mergeSort (meio+1,fim,v,vite,n);   
  // intercalação no vetor temporário t   
  i = inicio;   
  j = meio + 1;   
  k = 0;
  a = i;
  b = j;
  c = k;    
  while (i<meio+1 || j<fim+1)     
    // i passou do final da primeira metade, pegar v[j]     
    if (i == meio + 1 ){
	  vetaux[k++] = v[j++];
    vetaux2[c++] = vite[b++];
    }
	  else{    
      // j passou do final da segunda metade, pegar v[i]       
      if (j == fim+1){         
        vetaux[k++] = v[i++];
        vetaux2[c++] = vite[a++];
      }
      else{     
        if (v[i] < v[j]){           
            vetaux[k++] = v[i++];  
            vetaux2[c++] = vite[a++];
        }                  
        else{
          vetaux[k++] = v[j++];
          vetaux2[c++] = vite[b++];
        }
      }
    }            
  // copia vetor intercalado para o vetor original   
  for (i = inicio; i <= fim; i++){   
    v[i] = vetaux[i-inicio]; 
    vite[i] = vetaux2[i-inicio];
  }
} 
int main(){
    int n;
    cin >> n;
    int vetor[n];
    int vetoraux[n];
    for(int i=0;i<n;i++){
        cin >> vetor[i];
        vetoraux[i]= i+1;
    }
    mergeSort(0,n-1,vetor,vetoraux,n);
    for(int i=0;i<n;i++){
        cout << vetoraux[i] << " ";
    }
    cout << endl;
}