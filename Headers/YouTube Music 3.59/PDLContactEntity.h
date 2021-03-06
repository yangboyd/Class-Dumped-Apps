//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface PDLContactEntity : NSObject
{
    NSString *_identifier;
    unsigned long long _rowID;
    unsigned long long _source;
    NSNumber *_affinity;
    NSData *_protoData;
}

@property(readonly, nonatomic) NSData *protoData; // @synthesize protoData=_protoData;
@property(readonly, nonatomic) NSNumber *affinity; // @synthesize affinity=_affinity;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned long long rowID; // @synthesize rowID=_rowID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToEntity:(id)arg1;
- (id)initWithIdentifier:(id)arg1 rowID:(unsigned long long)arg2 source:(unsigned long long)arg3 affinity:(id)arg4 protoData:(id)arg5;
- (id)initWithIdentifier:(id)arg1 source:(unsigned long long)arg2 affinity:(id)arg3 protoData:(id)arg4;
- (id)protoBackedEntityAsAutocompletion;
- (id)asAutocompletion;

@end

