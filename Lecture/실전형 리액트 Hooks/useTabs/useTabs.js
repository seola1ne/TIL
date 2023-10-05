import React, { useState } from "react";
import ReactDOM from "react-dom";

import "./styles.css";

// Section 버튼을 클릭하면 각 section의 desc가 표시되게끔
const content = [
  {
    tab: "Section 1",
    desc: "I'm the content of the Section 1"
  },
  {
    tab: "Section 2",
    desc: "I'm the content of the Section 2"
  }
];

const useTabs = (initialTab, allTabs) => {
  const [currentIndex, setCurrentIndex] = useState(initialTab);
  if (!allTabs || !Array.isArray(allTabs)) {
    return;
  }
  // 현재 선택한 탭의 content를 얻으려면? (= 현재 선택한 content의 index를 얻으려면?)
  return {
    currentItem: allTabs[currentIndex],
    changeItem: setCurrentIndex
  };
};

export default function App() {
  const { currentItem, changeItem } = useTabs(1, content); // currentIndex의 초기값을 0으로(content[0])
  return (
    <div className="App">
      {content.map((section, index) => (
        <button onClick={() => changeItem(index)}>{section.tab}</button>
      ))}
      <div>{currentItem.desc}</div>
    </div>
  );
}
