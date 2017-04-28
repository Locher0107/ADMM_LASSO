# ADMM_2


This is a project that I wrote for application of Google Summer of CODE. However, due to my carelessness, I forget the deadline and fail to submit my project. Just keep it at my Github site.

This is what I do:

1.Implement L1-penalized Poisson (log-linear) regression in portable, standard C++ using an ADMM algorithm from scratch (not using an existing library)  
2.Wrap their implementation using Rcpp;  
3.Test their implementation;  
4.Package their implementation and pass R CMD check at MacOS and Windows platform.  

Reades can down load that using command 'r install_github("Locher0107/ADMM_LASSO")'



```{r}
library(glmnet)
library(devtools)
install_github("Locher0107/ADMM_LASSO")
library(mustbechecked)
set.seed(101)
X <- matrix(rnorm(1000, 4, 3), ncol = 10)
Y<- rpois(100, 3)
##because in R package I add vecotr 1 to the matrix X
X_old<-X
##This is the algorithm I wrote glmPR
glmPR(X, Y, 0.5, 1)##set lambda=0.5, rho=1
X<-X_old
glm(Y ~ X, family = "poisson")

```
