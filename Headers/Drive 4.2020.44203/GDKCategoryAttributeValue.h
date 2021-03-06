//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CATPublishedCategory_Attribute_BooleanOptions, CATPublishedCategory_Attribute_DateOptions, CATPublishedCategory_Attribute_IntegerListOptions, CATPublishedCategory_Attribute_IntegerOptions, CATPublishedCategory_Attribute_SelectionListOptions, CATPublishedCategory_Attribute_SelectionOptions, GDKCategoryUserState, GTLRDateTime, NSArray, NSNumber, NSString;
@protocol GIPClock;

@interface GDKCategoryAttributeValue : NSObject
{
    NSString *_text;
    NSArray *_textList;
    NSString *_longText;
    NSString *_selection;
    NSArray *_selectionList;
    CATPublishedCategory_Attribute_SelectionOptions *_selectionOptions;
    CATPublishedCategory_Attribute_SelectionListOptions *_selectionListOptions;
    NSNumber *_integer;
    NSArray *_integerList;
    CATPublishedCategory_Attribute_IntegerOptions *_integerOptions;
    CATPublishedCategory_Attribute_IntegerListOptions *_integerListOptions;
    NSNumber *_boolean;
    CATPublishedCategory_Attribute_BooleanOptions *_booleanOptions;
    GTLRDateTime *_date;
    CATPublishedCategory_Attribute_DateOptions *_dateOptions;
    GDKCategoryUserState *_user;
    NSArray *_userList;
    id <GIPClock> _clock;
}

+ (id)titleForSelectionListSelection:(id)arg1 options:(id)arg2;
+ (id)titlesForSelectionListSelections:(id)arg1 options:(id)arg2;
+ (id)titleForSelection:(id)arg1 options:(id)arg2;
+ (id)processDate:(id)arg1 withOptions:(id)arg2 clock:(id)arg3;
+ (id)processInteger:(id)arg1 withOptions:(id)arg2;
+ (id)processBoolean:(id)arg1 withOptions:(id)arg2;
+ (id)userListValue:(id)arg1;
+ (id)userValue:(id)arg1;
+ (id)dateValue:(id)arg1 withOptions:(id)arg2 clock:(id)arg3;
+ (id)booleanValue:(id)arg1 withOptions:(id)arg2;
+ (id)integerListValue:(id)arg1 withOptions:(id)arg2;
+ (id)integerValue:(id)arg1 withOptions:(id)arg2;
+ (id)selectionListValue:(id)arg1 withOptions:(id)arg2;
+ (id)selectionValue:(id)arg1 withOptions:(id)arg2;
+ (id)longTextValue:(id)arg1;
+ (id)textListValue:(id)arg1;
+ (id)textValue:(id)arg1;
+ (id)emptyValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GIPClock> clock; // @synthesize clock=_clock;
@property(readonly, copy, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(readonly, nonatomic) GDKCategoryUserState *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) CATPublishedCategory_Attribute_DateOptions *dateOptions; // @synthesize dateOptions=_dateOptions;
@property(readonly, copy, nonatomic) GTLRDateTime *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) CATPublishedCategory_Attribute_BooleanOptions *booleanOptions; // @synthesize booleanOptions=_booleanOptions;
@property(readonly, nonatomic) NSNumber *boolean; // @synthesize boolean=_boolean;
@property(readonly, copy, nonatomic) CATPublishedCategory_Attribute_IntegerListOptions *integerListOptions; // @synthesize integerListOptions=_integerListOptions;
@property(readonly, copy, nonatomic) CATPublishedCategory_Attribute_IntegerOptions *integerOptions; // @synthesize integerOptions=_integerOptions;
@property(readonly, copy, nonatomic) NSArray *integerList; // @synthesize integerList=_integerList;
@property(readonly, nonatomic) NSNumber *integer; // @synthesize integer=_integer;
@property(readonly, copy, nonatomic) CATPublishedCategory_Attribute_SelectionListOptions *selectionListOptions; // @synthesize selectionListOptions=_selectionListOptions;
@property(readonly, copy, nonatomic) CATPublishedCategory_Attribute_SelectionOptions *selectionOptions; // @synthesize selectionOptions=_selectionOptions;
@property(readonly, copy, nonatomic) NSArray *selectionList; // @synthesize selectionList=_selectionList;
@property(readonly, copy, nonatomic) NSString *selection; // @synthesize selection=_selection;
@property(readonly, copy, nonatomic) NSString *longText; // @synthesize longText=_longText;
@property(readonly, copy, nonatomic) NSArray *textList; // @synthesize textList=_textList;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)matchEmpty:(CDUnknownBlockType)arg1 singleString:(CDUnknownBlockType)arg2 stringList:(CDUnknownBlockType)arg3 userList:(CDUnknownBlockType)arg4 forType:(int)arg5;
- (id)initWithUserList:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithDate:(id)arg1 options:(id)arg2 clock:(id)arg3;
- (id)initWithBoolean:(id)arg1 options:(id)arg2;
- (id)initWithIntegerList:(id)arg1 options:(id)arg2;
- (id)initWithInteger:(id)arg1 options:(id)arg2;
- (id)initWithSelectionList:(id)arg1 options:(id)arg2;
- (id)initWithSelection:(id)arg1 options:(id)arg2;
- (id)initWithLongText:(id)arg1;
- (id)initWithTextList:(id)arg1;
- (id)initWithText:(id)arg1;

@end

