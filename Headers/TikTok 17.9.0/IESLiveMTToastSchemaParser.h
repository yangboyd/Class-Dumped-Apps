//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMTSchemaParser-Protocol.h"

@class NSString;
@protocol IESLiveToastFactory;

@interface IESLiveMTToastSchemaParser : NSObject <IESLiveMTSchemaParser>
{
    id <IESLiveToastFactory> _toastFactory;
}

+ (void)ieslivekit_register_schema;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
- (void)parseWithParams:(id)arg1 fromInside:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

