% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{NSE}
\alias{NSE}
\title{Nash-Sutcliffe Efficiency}
\usage{
NSE(yhat, y)
}
\arguments{
\item{yhat}{Model outputs}

\item{y}{Observations}
}
\value{
NSE
}
\description{
Nash-Sutcliffe Efficiency
}
\examples{
NSE(rnorm(100), rnorm(100))
}
