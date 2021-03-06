/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */




@protocol SUPurchaseManagerDelegate <NSObject>
@optional
- (id)purchaseManager:(id)manager purchaseBatchForPurchases:(id)purchases;
- (id)purchaseManager:(id)manager purchaseBatchForItems:(id)items;
- (void)purchaseManagerWillBeginUpdates:(id)purchaseManager;
- (void)purchaseManagerDidEndUpdates:(id)purchaseManager;
- (void)purchaseManager:(id)manager willAddPurchases:(id)purchases;
- (void)purchaseManager:(id)manager failedToAddPurchases:(id)addPurchases;
- (void)purchaseManager:(id)manager didAddPurchases:(id)purchases;
@end

