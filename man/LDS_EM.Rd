% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{LDS_EM}
\alias{LDS_EM}
\title{Learn LDS model}
\usage{
LDS_EM(y, u, v, theta0, niter = 1000L, tol = 1e-05)
}
\arguments{
\item{y}{Observation matrix (may need to be normalized and centered before hand) (q rows, T columns)}

\item{u}{Input matrix for the state equation (m_u rows, T columns)}

\item{v}{Input matrix for the output equation (m_v rows, T columns)}

\item{theta0}{A vector of initial values for the parameters}

\item{niter}{Maximum number of iterations, default 1000}

\item{tol}{Tolerance for likelihood convergence, default 1e-5. Note that the log-likelihood is normalized}
}
\value{
A list of model results
\itemize{
\item theta: model parameters (A, B, C, D, Q, R, mu1, V1) resulted from Mstep
\item fit: results of Estep
\item liks : vector of loglikelihood over the iteration steps
}
}
\description{
Estimate the hidden state and model parameters given observations and exogenous inputs using the EM algorithm. This is the key backend routine of this package.
}
\section{Note}{
 This code only works on one dimensional state and output at the moment. Therefore, transposing is skipped, and matrix inversion is treated as /, and log(det(Sigma)) is treated as log(Sigma).
}

