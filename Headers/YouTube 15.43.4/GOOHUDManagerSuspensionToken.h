//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GOOHUDSuspensionToken-Protocol.h>

@class NSString, NSUUID;

@interface GOOHUDManagerSuspensionToken : NSObject <GOOHUDSuspensionToken>
{
    NSUUID *_identifier;
    NSString *_category;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

