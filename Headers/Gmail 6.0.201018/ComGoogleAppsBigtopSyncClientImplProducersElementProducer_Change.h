//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopSyncClientImplCommonResultMetadata, ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change_Type, NSString;
@protocol JBTId;

@interface ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change : NSObject
{
    ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Change_Type *type_;
    id element_;
    id <JBTId> id__;
    NSString *rank_;
    ComGoogleAppsBigtopSyncClientImplCommonResultMetadata *metadata_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getMetadata;
- (id)getRank;
- (id)getId;
- (id)getType;
- (id)getElement;

@end

