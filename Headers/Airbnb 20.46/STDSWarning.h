//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface STDSWarning : NSObject
{
    NSString *_identifier;
    NSString *_message;
    long long _severity;
}

@property(readonly, nonatomic) long long severity; // @synthesize severity=_severity;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 message:(id)arg2 severity:(long long)arg3;

@end

