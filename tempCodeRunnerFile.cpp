  for (int i = X + 1; i < W; i++) {
    if (S.at(Y).at(i) == '.')
      ans++;
    else
      break;
  }