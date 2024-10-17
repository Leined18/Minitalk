
## Project Description

**Minitalk** is a small data exchange program that demonstrates inter-process communication using UNIX signals. The program consists of a **server** and a **client**. The client sends a string to the server, which receives and displays it.

Key Concepts:
- **Signals**: The communication is done using two signals, `SIGUSR1` and `SIGUSR2`, which encode binary data (0s and 1s).
- **Bit-level transmission**: Each character of the string is transmitted bit by bit from the client to the server using these signals.

---

## Cloning the Repository
To get started, clone the repository:
```bash
git clone --recursive git@github.com:Leined18/Minitalk.git
cd Minitalk
make all
```

This will compile both the server and client binaries.

---

## Execution
The program runs on two separate terminals:

1. **Server**: Launch the server to start receiving messages:
    ```bash
    ./server
    ```
    The server will output its **PID** (Process ID), which is needed by the client.

    Example:
    ```
    -> PID : *****
    ----------------------------------
    ```

2. **Client**: Use the client to send a string to the server by specifying the **server PID** and the string:
    ```bash
    ./client "SERVER_PID" "YOUR STRING"
    ```
    Replace `SERVER_PID` with the actual PID of the running server and `"YOUR STRING"` with the message you want to send.

    Example:
    ```bash
    ./client 12345 "Hello, Minitalk!"
    ```

---

## Notes
- The server must be running before the client can send any messages.
- The communication between the server and client is strictly through signals, ensuring efficient and low-level data transfer.

