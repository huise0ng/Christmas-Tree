// Node.js 환경에서 실행 가능

const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('전화번호를 입력하세요 (010-xxxx-yyyy): ', (phone_number) => {
  // '-'를 기준으로 앞 4자리와 뒤 4자리를 나누기
  const [prefix, postfix] = phone_number.split('-');

  // 앞 4자리와 뒤 4자리를 바꾸어 새로운 전화번호 만들기
  const new_phone_number = `010-${postfix}-${prefix}`;

  // 새로운 전화번호 출력
  console.log(new_phone_number);

  rl.close();
});