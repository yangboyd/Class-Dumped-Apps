//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRMutableData;

@interface FIRTransactionResult : NSObject
{
    _Bool isSuccess;
    FIRMutableData *update;
}

+ (id)abort;
+ (id)successWithValue:(id)arg1;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess;
@property(retain, nonatomic) FIRMutableData *update; // @synthesize update;
- (void).cxx_destruct;

@end

