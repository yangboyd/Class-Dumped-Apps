//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseDataObject.h"

@class NSArray, NSNumber, NSString;

@interface FVRNeedItem : FVRBaseDataObject
{
    NSString *_name;
    NSString *_subtitle;
    NSNumber *_needId;
    NSArray *_subcategories;
}

@property(retain, nonatomic) NSArray *subcategories; // @synthesize subcategories=_subcategories;
@property(retain, nonatomic) NSNumber *needId; // @synthesize needId=_needId;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithElement:(id)arg1;

@end

