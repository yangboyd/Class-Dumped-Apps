//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNTableViewCellModel-Protocol.h"

@class NSString;

@interface DYNWorldEmptyStateTableViewCellModel : NSObject <DYNTableViewCellModel>
{
    NSString *_text;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, copy, nonatomic) NSString *cellIdentifier;
- (id)initWithText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) int visualElementID;

@end

