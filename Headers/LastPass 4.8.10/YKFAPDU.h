//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface YKFAPDU : NSObject
{
    NSData *_apduData;
}

@property(retain, nonatomic) NSData *apduData; // @synthesize apduData=_apduData;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)extendedApduWithCla:(unsigned char)arg1 ins:(unsigned char)arg2 p1:(unsigned char)arg3 p2:(unsigned char)arg4 data:(id)arg5;
- (id)apduWithCla:(unsigned char)arg1 ins:(unsigned char)arg2 p1:(unsigned char)arg3 p2:(unsigned char)arg4 data:(id)arg5;
- (id)initWithCla:(unsigned char)arg1 ins:(unsigned char)arg2 p1:(unsigned char)arg3 p2:(unsigned char)arg4 data:(id)arg5 type:(unsigned long long)arg6;

@end

