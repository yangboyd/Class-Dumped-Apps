//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSCommonInternalGroupRevisions.h"

@class JavaUtilOptional;

@interface DYNSCommonInternalAutoValue_GroupRevisions : DYNSCommonInternalGroupRevisions
{
    JavaUtilOptional *metadataRevision_;
    JavaUtilOptional *worldRevision_;
    JavaUtilOptional *streamRevision_;
    JavaUtilOptional *membershipRevision_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getMembershipRevision;
- (id)getStreamRevision;
- (id)getWorldRevision;
- (id)getMetadataRevision;

@end

