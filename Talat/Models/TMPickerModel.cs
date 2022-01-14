﻿// This file has been autogenerated from a class added in the UI designer.

using System;
using System.Collections.Generic;
using UIKit;

namespace Talat
{
    internal class TMPickerModel : UIPickerViewModel
    {

        public EventHandler ValueChanged;
        public string SelectedTMPercentageByUser;
        private List<string> tmList;

        public TMPickerModel(List<string> tmList)
        {
            this.tmList = tmList;
        }

        public override nint GetRowsInComponent(UIPickerView pickerView, nint component)
        {
            return tmList.Count;
        }

        public override nint GetComponentCount(UIPickerView pickerView)
        {
            return 1;
        }

        public override string GetTitle(UIPickerView pickerView, nint row, nint component)
        {
            return tmList[(int)row];
        }

        public override void Selected(UIPickerView pickerView, nint row, nint component)
        {
            var setTipMyselfPercentage = tmList[(int)row];
            SelectedTMPercentageByUser = setTipMyselfPercentage;
            ValueChanged(null, null);
        }
    }
}