void transpuesta(float (*m1)[5], float (*r)[5])
{

cout<<"Obtener la transpuesta de una matriz";

for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		
		r[j][i]=m1[j][i];
		cout<<r[j][i]<<" ";
	}
	cout<<"\n";
}


}
