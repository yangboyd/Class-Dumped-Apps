//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Protocol;

@interface FIRDependency : NSObject
{
    _Bool _isRequired;
    Protocol *_protocol;
}

+ (id)dependencyWithProtocol:(id)arg1 isRequired:(_Bool)arg2;
+ (id)dependencyWithProtocol:(id)arg1;
@property(readonly, nonatomic) _Bool isRequired; // @synthesize isRequired=_isRequired;
@property(readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)arg1 isRequired:(_Bool)arg2;

@end

