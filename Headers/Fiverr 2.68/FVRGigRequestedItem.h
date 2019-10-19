//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseDataObject.h"

@class NSArray, NSNumber, NSString;

@interface FVRGigRequestedItem : FVRBaseDataObject
{
    int _duration;
    NSString *_gigRequestId;
    NSString *_category_id;
    NSString *_subcategory_id;
    NSNumber *_updatedAtDate;
    NSString *_message;
    NSNumber *_offerCount;
    NSArray *_customOffersArray;
    NSString *_requestStatus;
    NSNumber *_budget;
    NSString *_originalMessage;
    NSArray *_extendedAttributes;
}

@property(retain, nonatomic) NSArray *extendedAttributes; // @synthesize extendedAttributes=_extendedAttributes;
@property(copy, nonatomic) NSString *originalMessage; // @synthesize originalMessage=_originalMessage;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *budget; // @synthesize budget=_budget;
@property(copy, nonatomic) NSString *requestStatus; // @synthesize requestStatus=_requestStatus;
@property(retain, nonatomic) NSArray *customOffersArray; // @synthesize customOffersArray=_customOffersArray;
@property(retain, nonatomic) NSNumber *offerCount; // @synthesize offerCount=_offerCount;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *updatedAtDate; // @synthesize updatedAtDate=_updatedAtDate;
@property(copy, nonatomic) NSString *subcategory_id; // @synthesize subcategory_id=_subcategory_id;
@property(copy, nonatomic) NSString *category_id; // @synthesize category_id=_category_id;
@property(copy, nonatomic) NSString *gigRequestId; // @synthesize gigRequestId=_gigRequestId;
- (void).cxx_destruct;
- (id)getRequestedStatusColor;
- (id)description;
- (id)initWithElement:(id)arg1;

@end

