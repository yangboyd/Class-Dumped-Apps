//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseDataObject.h"

@class NSNumber, NSString;

@interface FVRSearchSuggestionItem : FVRBaseDataObject
{
    _Bool _isFromRecent;
    NSString *_searchValue;
    NSString *_searchLongValue;
    NSNumber *_searchCategoryId;
    NSNumber *_searchSubCategoryId;
    long long _searchDataType;
    NSString *_searchDisplayString;
}

@property(retain, nonatomic) NSString *searchDisplayString; // @synthesize searchDisplayString=_searchDisplayString;
@property(nonatomic) _Bool isFromRecent; // @synthesize isFromRecent=_isFromRecent;
@property(nonatomic) long long searchDataType; // @synthesize searchDataType=_searchDataType;
@property(retain, nonatomic) NSNumber *searchSubCategoryId; // @synthesize searchSubCategoryId=_searchSubCategoryId;
@property(retain, nonatomic) NSNumber *searchCategoryId; // @synthesize searchCategoryId=_searchCategoryId;
@property(retain, nonatomic) NSString *searchLongValue; // @synthesize searchLongValue=_searchLongValue;
@property(retain, nonatomic) NSString *searchValue; // @synthesize searchValue=_searchValue;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (long long)getDataTypeByDataString:(id)arg1;
- (id)initWithSearchValue:(id)arg1;
- (id)initWithElement:(id)arg1;

@end

