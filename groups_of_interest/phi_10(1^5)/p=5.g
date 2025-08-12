# choose p
p := 5;

F := FreeGroup("s1","s2","s3","s4","s5");;
s := GeneratorsOfGroup(F);
s1 := s[1]; s2 := s[2]; s3 := s[3]; s4 := s[4]; s5 := s[5];

rels := [];

# nontrivial commutator relations: [s_i, s1] = s_{i+1} for i=2,3,4
Add(rels, Comm(s2,s1)*s3^-1);
Add(rels, Comm(s3,s1)*s4^-1);
Add(rels, Comm(s4,s1)*s5^-1);

Add(rels, Comm(s2,s3)*s5^-1);

# trivial commutator relations: (should be [5 choose 2]-3 = 7)
Add(rels, Comm(s5,s1));
Add(rels, Comm(s5,s2));
Add(rels, Comm(s5,s3));
Add(rels, Comm(s5,s4));

Add(rels, Comm(s4,s2));
Add(rels, Comm(s4,s3));

# order of s1 is p
Add(rels, s1^p);

# other generator orders
Add(rels, s2^p); 
Add(rels, s3^p); 
Add(rels, s4^p); 
Add(rels, s5^p);

G := F / NormalClosure(F, rels);

# inspect
Print(Size(G), "\n");
Print(StructureDescription(G), "\n");
Print(IdSmallGroup(G), "\n");

# 3125
# ((C5 x C5 x C5) : C5) : C5
# [ 3125, 33 ]