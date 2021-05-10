
#ifndef mcp_h
#define mcp_h


class mcp {
    public:
    //estados do MCP
        #define mcpParado 0
        #define mcpFuncionando 1

    //construtor
        mcp();

        bool getStatusMCP();
        unsigned int getRotacaoMCP();
        void partirMCP();
        void pararMCP();
        void demandaRotacao(double);
        void setSetPoint(double);
        void setRealimentacao(double);
        void setKp(double);
        void setKi(double);
        void setKd(double);
        double getPosAtuador();
        double getSetPoint();
        double getRealimentacao();
        
        double processaPID(double, double);

    private:
        bool myStatusMCP=0;
        double myRotacao=0;
        // Variáveis PID
        double Setpoint, Realimentacao, myPosAtuador, myKp, myKi, myKd;        
};

#endif