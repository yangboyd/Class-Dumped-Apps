//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSOperation, NSOperationQueue, NSPointerArray, NSString, PSPDFDocument;
@protocol PSPDFAnnotationListDataSourceDelegate, PSPDFAnnotationListDataSourceDelegate><PSPDFDelegateProxying;

@interface PSPDFAnnotationListDataSource : NSObject
{
    _Bool _hasLoadedAnnotations;
    _Bool _clearingAnnotations;
    _Bool _deletingAnnotations;
    NSString *_identifier;
    PSPDFDocument *_document;
    PSPDFAnnotationListDataSource *_parentAnnotationListDataSource;
    NSString *_searchString;
    unsigned long long _numberOfPages;
    unsigned long long _numberOfAnnotations;
    NSArray *_annotations;
    NSArray *_allAnnotations;
    NSArray *_pageNumbers;
    NSArray *_allPageNumbers;
    NSOperationQueue *_reloadAnnotationsOperationQueue;
    NSOperation *_reloadAnnotationsOperation;
    NSPointerArray *_childAnnotationListDataSources;
    NSMutableArray *_temporaryAnnotations;
    NSMutableArray *_temporaryPageNumbers;
    id <PSPDFAnnotationListDataSourceDelegate><PSPDFDelegateProxying> _delegateProxyStorage;
}

+ (id)annotationListDataSourceWithParentAnnotationListDataSource:(id)arg1;
+ (id)annotationListDataSourceWithDocument:(id)arg1;
@property(retain) id <PSPDFAnnotationListDataSourceDelegate><PSPDFDelegateProxying> delegateProxyStorage; // @synthesize delegateProxyStorage=_delegateProxyStorage;
@property(retain, nonatomic) NSMutableArray *temporaryPageNumbers; // @synthesize temporaryPageNumbers=_temporaryPageNumbers;
@property(retain, nonatomic) NSMutableArray *temporaryAnnotations; // @synthesize temporaryAnnotations=_temporaryAnnotations;
@property(retain, nonatomic) NSPointerArray *childAnnotationListDataSources; // @synthesize childAnnotationListDataSources=_childAnnotationListDataSources;
@property(nonatomic, getter=isDeletingAnnotations) _Bool deletingAnnotations; // @synthesize deletingAnnotations=_deletingAnnotations;
@property(nonatomic, getter=isClearingAnnotations) _Bool clearingAnnotations; // @synthesize clearingAnnotations=_clearingAnnotations;
@property(retain, nonatomic) NSOperation *reloadAnnotationsOperation; // @synthesize reloadAnnotationsOperation=_reloadAnnotationsOperation;
@property(copy, nonatomic) NSOperationQueue *reloadAnnotationsOperationQueue; // @synthesize reloadAnnotationsOperationQueue=_reloadAnnotationsOperationQueue;
@property(copy, nonatomic) NSArray *allPageNumbers; // @synthesize allPageNumbers=_allPageNumbers;
@property(copy, nonatomic) NSArray *pageNumbers; // @synthesize pageNumbers=_pageNumbers;
@property(copy, nonatomic) NSArray *allAnnotations; // @synthesize allAnnotations=_allAnnotations;
@property(copy, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
@property(nonatomic) _Bool hasLoadedAnnotations; // @synthesize hasLoadedAnnotations=_hasLoadedAnnotations;
@property(nonatomic) unsigned long long numberOfAnnotations; // @synthesize numberOfAnnotations=_numberOfAnnotations;
@property(nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) PSPDFAnnotationListDataSource *parentAnnotationListDataSource; // @synthesize parentAnnotationListDataSource=_parentAnnotationListDataSource;
@property(readonly, nonatomic) PSPDFDocument *document; // @synthesize document=_document;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)indexPathsFromIndexSet:(id)arg1;
- (id)computeIndexPathDiffBetweenPageNumbersOld:(id)arg1 andPageNumbersNew:(id)arg2 annotationsOld:(id)arg3 andAnnotationsNew:(id)arg4;
- (id)indexPathsForRowsInRange:(struct _NSRange)arg1 inSection:(unsigned long long)arg2;
- (_Bool)canDeleteAnnotation:(id)arg1;
- (_Bool)canClearAnnotation:(id)arg1;
- (long long)numberOfAnnotationsInArrayOfAnnotations:(id)arg1;
- (id)description;
- (void)annotationsRemovedNotification:(id)arg1;
- (void)annotationsAddedNotification:(id)arg1;
- (void)annotationChangedNotification:(id)arg1;
- (void)parentAnnotationListDataSourceDidEndUpdates;
- (void)parentAnnotationListDataSourceWillBeginUpdates;
- (void)forEachChildAnnotationListDataSource:(CDUnknownBlockType)arg1;
- (void)removeChildAnnotationListDataSource:(id)arg1;
- (void)addChildAnnotationListDataSource:(id)arg1;
- (id)targetIndexPathForMovingAnnotationAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2;
- (_Bool)canMoveAnnotationAtIndexPath:(id)arg1;
- (void)moveAnnotationAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)filterAnnotations;
- (id)makeReloadAnnotationsOperation;
- (id)loadAnnotationsOnPageAtIndex:(unsigned long long)arg1;
- (id)loadAnnotationsByFirstAskingDelegateOnPageAtIndex:(unsigned long long)arg1;
- (void)reloadAnnotationsSynchronously:(_Bool)arg1;
- (void)cancelReloadingAnnotations;
- (void)reloadAnnotations;
- (void)scheduleReloadAnnotations;
- (void)deleteAnnotationsAtIndexPaths:(id)arg1;
- (id)deletableAnnotationsAtIndexPaths:(id)arg1;
- (void)deleteAnnotationAtIndexPath:(id)arg1;
- (_Bool)canDeleteAnnotationAtIndexPath:(id)arg1;
- (void)clearAnnotationsAtIndexPaths:(id)arg1;
- (id)clearableAnnotationsAtIndexPaths:(id)arg1;
- (void)clearAnnotationAtIndexPath:(id)arg1;
- (_Bool)canClearAnnotationAtIndexPath:(id)arg1;
- (id)annotationsOnPageAtIndex:(unsigned long long)arg1;
- (id)annotationsAtIndexPaths:(id)arg1;
- (id)annotationAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *indexPathsForAllAnnotations;
- (id)indexPathsForAnnotationsOnPageAtIndex:(unsigned long long)arg1;
- (long long)pageNumberForPageAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfAnnotationsOnPageAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithParentAnnotationListDataSource:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (void)commonInit;
- (id)init;
@property(retain, nonatomic) id <PSPDFAnnotationListDataSourceDelegate><PSPDFDelegateProxying> delegateProxy;
@property(nonatomic) __weak id <PSPDFAnnotationListDataSourceDelegate> delegate;

@end

