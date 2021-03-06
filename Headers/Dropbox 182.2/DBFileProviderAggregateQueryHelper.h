//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBDatabaseQueryHelper.h>

@class DBFileProviderDatabaseQueryHelper, DBMetadataDatabaseQueryHelper, DBRecentsDatabaseQueryHelper;

@interface DBFileProviderAggregateQueryHelper : DBDatabaseQueryHelper
{
    DBRecentsDatabaseQueryHelper *_recentsQueryHelper;
    DBMetadataDatabaseQueryHelper *_metadataQueryHelper;
    DBFileProviderDatabaseQueryHelper *_fileProviderQueryHelper;
}

+ (id)schemaStrings;
+ (id)queueForOpeningDatabaseAtPath:(id)arg1 forUserId:(id)arg2;
+ (id)queueWrapperForMetadataDatabaseWithQueue:(id)arg1;
+ (id)queueWrapperForRecentsDatabaseWithQueue:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) DBFileProviderDatabaseQueryHelper *fileProviderQueryHelper;
@property(readonly, nonatomic) DBMetadataDatabaseQueryHelper *metadataQueryHelper;
@property(readonly, nonatomic) DBRecentsDatabaseQueryHelper *recentsQueryHelper;
- (id)initWithDatabase:(id)arg1;

@end

