//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASMCallInput.h"

@class AWSModel;

@interface ASMPDSSCallInput : ASMCallInput
{
    AWSModel *_awsInput;
}

@property(readonly, nonatomic) AWSModel *awsInput; // @synthesize awsInput=_awsInput;
- (void).cxx_destruct;
- (id)initWithAwsInput:(id)arg1 withUser:(id)arg2;

@end

