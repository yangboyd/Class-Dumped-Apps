//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsTasksSharedUtilsLocalEntity.h"

@class ComGoogleCommonBaseOptional, TDLEntity, TDLEntity_EntityCase;
@protocol TDLEntityId;

@interface ComGoogleAppsTasksSharedUtilsAutoValue_LocalEntity : ComGoogleAppsTasksSharedUtilsLocalEntity
{
    ComGoogleCommonBaseOptional *originalValue_;
    TDLEntity *effectiveValue_;
    _Bool hasDirtyState_;
    TDLEntity_EntityCase *entityType_;
    id <TDLEntityId> entityId_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)entityId;
- (id)entityType;
- (_Bool)hasDirtyState;
- (id)effectiveValue;
- (id)originalValue;

@end

