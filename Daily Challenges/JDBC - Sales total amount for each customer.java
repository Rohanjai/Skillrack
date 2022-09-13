void execute(Connection conn,Scanner sc){
    try{
        String query="select name,sum(amount) as amount from sales group by name order by name";
        PreparedStatement ps=conn.prepareStatement(query);
        ResultSet rs=ps.executeQuery();
        while(rs.next()){
            System.out.println(rs.getString("name")+" "+rs.getInt("amount"));
        }
    }
    catch(Exception e){
        
    }
}