//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FNROBaseObject.h>

#import <Funny/IFCountryCodeEntityProtocol-Protocol.h>

@class NSString;

@interface FNROCountryCode : FNROBaseObject <IFCountryCodeEntityProtocol>
{
    NSString *_name;
    NSString *_code;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

