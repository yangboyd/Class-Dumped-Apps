//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JAddOnsGrid, JAddOnsLabelContentPairWidget, JAddOnsTextWidget, JAddOnsWidget_Button, JAddOnsWidget_DataCase, JAddOnsWidget_DateTimePicker, JAddOnsWidget_Divider, JAddOnsWidget_HorizontalAlign, JAddOnsWidget_Image, JAddOnsWidget_ImageKeyValue, JAddOnsWidget_KeyValue, JAddOnsWidget_Menu, JAddOnsWidget_SelectionControl, JAddOnsWidget_TextField, JAddOnsWidget_TextKeyValue, JAddOnsWidget_TextParagraph;
@protocol JavaUtilList;

@protocol JAddOnsWidgetOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JAddOnsWidget_DataCase *)getDataCase;
- (JAddOnsWidget_HorizontalAlign *)getHorizontalAlign;
- (_Bool)hasHorizontalAlign;
- (JAddOnsWidget_Button *)getButtonsWithInt:(int)arg1;
- (id <JavaUtilList>)getButtonsList;
- (int)getButtonsCount;
- (JAddOnsWidget_DateTimePicker *)getDateTimePicker;
- (_Bool)hasDateTimePicker;
- (JAddOnsWidget_SelectionControl *)getSelectionControl;
- (_Bool)hasSelectionControl;
- (JAddOnsWidget_TextField *)getTextField;
- (_Bool)hasTextField;
- (JAddOnsWidget_Menu *)getMenu;
- (_Bool)hasMenu;
- (JAddOnsGrid *)getGrid;
- (_Bool)hasGrid;
- (JAddOnsWidget_Divider *)getDivider;
- (_Bool)hasDivider;
- (JAddOnsWidget_KeyValue *)getKeyValue;
- (_Bool)hasKeyValue;
- (JAddOnsWidget_Image *)getImage;
- (_Bool)hasImage;
- (JAddOnsWidget_ImageKeyValue *)getImageKeyValue;
- (_Bool)hasImageKeyValue;
- (JAddOnsWidget_TextKeyValue *)getTextKeyValue;
- (_Bool)hasTextKeyValue;
- (JAddOnsWidget_TextParagraph *)getTextParagraph;
- (_Bool)hasTextParagraph;
- (JAddOnsLabelContentPairWidget *)getLabelContentPairWidget;
- (_Bool)hasLabelContentPairWidget;
- (JAddOnsTextWidget *)getTextWidget;
- (_Bool)hasTextWidget;
@end

