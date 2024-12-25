while (cin.fail())
        {
            cout << termcolor::on_bright_red;
            cout << termcolor::bright_white;
            cout << "Please enter a valid number!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << termcolor::reset;
            cout << "Enter Your Choice: ";
            cin >> Choice1;
        }