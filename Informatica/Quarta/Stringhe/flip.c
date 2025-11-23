/* DATA UNA STRINGA CREARE LA STRINGA ALL'INVERSO 
   SCAMBIANDO GLI ELEMENTI   */
   #include <stdlib.h>
   #include <stdio.h>
   #include <string.h>

   typedef char* String;

   void flip(String s){
      char tmp;
      
      for(int i=0; i<strlen(s)/2; i++){
         tmp=s[i];
         s[i]=s[strlen(s)-i-1];
         s[strlen(s)-i-1]=tmp;
      }
   }

   int main(){
      

      String s = (String)malloc(sizeof(s)*sizeof(char));
      if (s == NULL) return 1;

      printf("Inserisci la parole o frase: ");
      fgets(s, 50, stdin);

      flip(s);
      printf("la stringa invertita vale: %s", s);
      free(s);
      return 0;
   }