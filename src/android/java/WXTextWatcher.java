package org.wxwidgets;

import android.text.Editable;
import android.text.TextWatcher;

public class WXTextWatcher implements TextWatcher {

	private WXView m_view = null;
	
	public WXTextWatcher(WXView view) {
		m_view = view;
	}

	@Override
	public void afterTextChanged(Editable s) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void beforeTextChanged(CharSequence s, int start, int count, int after) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void onTextChanged(CharSequence s, int start, int before, int count) {
		WXNative.wxOnTextChanged(m_view.getWXPtr(), s.toString());
	}

}
