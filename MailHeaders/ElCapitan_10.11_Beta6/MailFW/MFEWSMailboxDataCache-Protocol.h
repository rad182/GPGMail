/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MFEWSMailboxDataCache <NSObject>
- (void)dataNotFoundForURL:(id)arg1;
- (void)updateCachedFolderID:(id)arg1 andSyncState:(id)arg2 forMailboxURL:(id)arg3;
- (id)cachedSyncStateForMailboxURL:(id)arg1;
- (id)cachedFolderIDForMailboxURL:(id)arg1;
@end
