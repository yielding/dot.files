Vim�UnDo� �|�jf nN�!��F�)M�R��/��)�����                                     L���    _�                     l        ����                                                                                                                                                                                                                                                                                                                            l           �           V        L��w    �   k   l          class AFCFileReference   {   public:     AFCFileReference();     virtual ~AFCFileReference();       public:     bool is_opened();     bool close();       public:   *  bool     seek(int64_t offset, int mode);   !  bool     tell(int64_t* offset);   -  uint32_t read(char* buffer, uint32_t size);   .  bool     write(char* buffer, uint32_t size);   '  bool     set_filesize(uint64_t size);       public:   3  std::string last_error() { return m_last_error; }   7  std::string clear_last_error() { m_last_error = ""; }   B  std::string set_last_error(std::string& m) { m_last_error = m; }       private:     afc_file_ref m_ref;     afc_connection m_connection;     std::string m_last_error;   };    5�_�                           ����                                                                                                                                                                                                                                                                                                                            l           l           V        L���     �              char const* client_version()     {5�_�                          ����                                                                                                                                                                                                                                                                                                                            l           l           V        L���     �               char const* client_version() {   '    return AFCGetClientVersionString();5�_�                           ����                                                                                                                                                                                                                                                                                                                            l           l           V        L���     �            D  char const* client_version() { return AFCGetClientVersionString();     }5�_�                    �        ����                                                                                                                                                                                                                                                                                                                            l           l           V        L���     �   �   �           5�_�                    �        ����                                                                                                                                                                                                                                                                                                                            l           l           V        L���     �   �   �           5�_�                    �        ����                                                                                                                                                                                                                                                                                                                            l           l           V        L���     �   �   �           5�_�      	              �        ����                                                                                                                                                                                                                                                                                                                            l           l           V        L���     �   �   �           5�_�      
           	           ����                                                                                                                                                                                                                                                                                                                            l           l           V        L���     �   �              5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                            l           l           V        L���    �                5�_�   
                 �        ����                                                                                                                                                                                                                                                                                                                            l           l           V        L���    �   �   �           5�_�                    r        ����                                                                                                                                                                                                                                                                                                                                                v       L���     �   q   s         5�_�                    r       ����                                                                                                                                                                                                                                                                                                                                                v       L���     �   r   t      5�_�                    r        ����                                                                                                                                                                                                                                                                                                                            �          �          v       L���     �   q   s        AFCFileReference5�_�                    r       ����                                                                                                                                                                                                                                                                                                                            �          �          v       L���     �   q   s        class AFCFileReference5�_�                    q        ����                                                                                                                                                                                                                                                                                                                            �          �          v       L���     �   p   q          +typedef std::list<std::string> string_list;5�_�                    q        ����                                                                                                                                                                                                                                                                                                                                                v       L���     �   q   s      5�_�                     q        ����                                                                                                                                                                                                                                                                                                                            �          �          v       L���    �   q   s      5��