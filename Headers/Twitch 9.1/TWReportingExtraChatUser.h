//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitchKit/TWReportingExtra-Protocol.h>

@class NSString;

@interface TWReportingExtraChatUser : NSObject <TWReportingExtra>
{
    NSString *_extra;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *extra; // @synthesize extra=_extra;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithChannelIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

