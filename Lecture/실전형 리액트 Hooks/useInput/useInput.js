import "./styles.css";
import React, { useState } from "react";

// 커스텀 훅 useInput
// 초기 값, 입력 값 검증 함수가 인자!
const useInput = (initialValue, validator) => {
  const [value, setValue] = useState(initialValue);
  // 초기 값으로 value 설정
  const onChange = (event) => {
    // 입력 값이 변경될 때 호출
    const {
      target: { value }
    } = event;
    // const value = event.target.value와 같음
    let willUpdate = true;
    if (typeof validator === "function") {
      willUpdate = validator(value);
    }
    if (willUpdate) { // validator로부터 true를 반환받았을 때만 value를 업데이트
      setValue(value);
    }
  };
  return { value, onChange };
};

export default function App() {
  const maxLen = (value) => !value.includes("@");
  // 입력받은 value에 @가 없으면 true 반환
  const name = useInput("Mr. ", maxLen);
  // name이 useInput 호출, 초기 값은 Mr. & 입력 값 검증 함수는 maxLen
  return (
    <div className="App">
      <input placeholder="Name" {...name} />
      {/* name에서 반환된 value, onChange를 input에게 전달함 */}
    </div>
  );
}
