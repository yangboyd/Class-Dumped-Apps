//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseDataObject.h"

@class NSNumber, NSString;

@interface FVROrderOriginalInfoItem : FVRBaseDataObject
{
    NSString *_originalItemName;
    NSNumber *_gigPrice;
    NSString *_gigDuration;
    NSNumber *_gigQuantity;
    NSNumber *_gigBasePrice;
    NSNumber *_gigSubTotalPrice;
    NSString *_gigCategory;
    NSString *_gigSubCategory;
}

@property(copy, nonatomic) NSString *gigSubCategory; // @synthesize gigSubCategory=_gigSubCategory;
@property(copy, nonatomic) NSString *gigCategory; // @synthesize gigCategory=_gigCategory;
@property(retain, nonatomic) NSNumber *gigSubTotalPrice; // @synthesize gigSubTotalPrice=_gigSubTotalPrice;
@property(retain, nonatomic) NSNumber *gigBasePrice; // @synthesize gigBasePrice=_gigBasePrice;
@property(retain, nonatomic) NSNumber *gigQuantity; // @synthesize gigQuantity=_gigQuantity;
@property(retain, nonatomic) NSString *gigDuration; // @synthesize gigDuration=_gigDuration;
@property(retain, nonatomic) NSNumber *gigPrice; // @synthesize gigPrice=_gigPrice;
@property(retain, nonatomic) NSString *originalItemName; // @synthesize originalItemName=_originalItemName;
- (void).cxx_destruct;

@end

