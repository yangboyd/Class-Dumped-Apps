//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDLDataModelShard_Builder.h"

@class NSString, TDLDataModelShard_Type;

@interface TDLAutoValue_DataModelShard_Builder : TDLDataModelShard_Builder
{
    TDLDataModelShard_Type *type_;
    NSString *chatRosterId_;
}

- (void)dealloc;
- (id)build;
- (id)setChatRosterIdWithNSString:(id)arg1;
- (id)setTypeWithTDLDataModelShard_Type:(id)arg1;

@end

