//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MDMPasscodeState : NSObject
{
    NSString *_status;
    NSString *_info;
}

+ (id)passcodeState;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *status; // @synthesize status=_status;
- (id)initWithStatus:(id)arg1 info:(id)arg2;

@end

